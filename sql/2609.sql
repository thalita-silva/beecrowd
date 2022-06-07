--author: Thalita
--2609 - Produtos por categoria
select name, sum(products.amount) from products
join categories on categories.id = products.id_categories
group by categories.name;