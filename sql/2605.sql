--author: Thalita--
--2605 - Representantes Executivos--
select products.name, providers.name from products
join providers on providers.id = products.id_providers
join categories on categories.id = products.id_categories
where categories.id = 6;