/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

SELECT c.name, (s.math*2 + s.specific*3 + s.project_plan*5)/10 AS avg FROM candidate as c
JOIN score as s ON s.candidate_id = c.id

