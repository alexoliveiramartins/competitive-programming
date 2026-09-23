class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        m = len(grid)
        n = len(grid[0])

        def dfs(rp, cp):
            if not (0 <= rp < m and 0 <= cp < n):
                return
            
            if grid[rp][cp] == "0" or (rp, cp) in visited:
                return
            
            visited.add((rp, cp))

            directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

            for dr, dc in directions:
                dfs(rp + dr, cp + dc)
                    
        islands = 0
        visited = set()

        for r in range(m):
            for c in range(n):
                if grid[r][c] == "1" and (r, c) not in visited:
                    islands += 1
                    dfs(r, c)
        
        return islands