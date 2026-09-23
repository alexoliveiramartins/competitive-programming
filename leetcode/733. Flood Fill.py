class Solution:
    def floodFill(self, image: list[list[int]], sr: int, sc: int, color: int) -> list[list[int]]:
        m = len(image) # rows
        n = len(image[0]) # cols

        start_c = image[sr][sc]

        def dfsFill(image, sr, sc, visited):
            if not (0 <= sr < m and 0 <= sc < n): 
                return
        
            if image[sr][sc] != start_c:
                return
            
            if (sr, sc) in visited:
                return
            
            image[sr][sc] = color
            visited.add((sr, sc))

            directions = [
                (0, 1),
                (1, 0),
                (0, -1),
                (-1, 0)
            ]

            for dv, dh in directions:
                dfsFill(image, sr + dv, sc + dh, visited) 

        visited = set()
        dfsFill(image, sr, sc, visited)
        
        return image
