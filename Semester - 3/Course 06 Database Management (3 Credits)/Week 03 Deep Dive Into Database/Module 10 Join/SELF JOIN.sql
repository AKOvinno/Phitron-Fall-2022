select e.first_name AS employee, m.first_name AS manager, e.manager_id, m.employee_id
from employees e JOIN employees m 
ON (e.manager_id = m.employee_id)