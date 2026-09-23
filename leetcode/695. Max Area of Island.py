class Solution:
    def maxAreaOfIsland(self, grid: list[list[int]]) -> int:
        m = len(grid)
        n = len(grid[0])

        def dfs(rp, cp, visited) -> int:
            if not(0 <= rp < m and 0 <= cp < n):
                return 0

            if(grid[rp][cp] == 0 or (rp, cp) in visited):
                return 0

            visited.add((rp, cp)) 
            count = 1

            directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
            for rd, cd in directions: 
                count += dfs(rp + rd, cp + cd, visited)

            return count

        biggest = 0
        visited = set()
        
        for r in range(m):
            for c in range(n):
                if grid[r][c] == 1 and (r, c) not in visited:
                    count = 0
                    count = dfs(r, c, visited)
                    biggest = max(count, biggest)

        return biggest