/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

SELECT c.name, CAST((s.math*2 + s.specific*3 + s.project_plan*5)/10 AS DECIMAL(10,2)) AS avg 
FROM candidate as c
JOIN score as s ON s.candidate_id = c.id
ORDER BY avg DESC;
