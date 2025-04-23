SELECT DISTINCT c.name, sum(amount) AS sum FROM categories AS c
JOIN products ON products.id_categories = c.id
GROUP BY c.name;
