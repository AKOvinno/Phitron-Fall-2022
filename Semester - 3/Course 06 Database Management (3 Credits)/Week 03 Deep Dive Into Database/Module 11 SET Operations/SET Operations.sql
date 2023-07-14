USE hr;

-- UNION, UNION ALL, MINUS (Not Working)

select *
from departments
UNION 
select *
from jobs;
