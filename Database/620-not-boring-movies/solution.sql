-- Write your PostgreSQL query statement below
select id,movie,description,rating
from Cinema
where description !='boring' and (id %2 !=0)
order by rating desc;