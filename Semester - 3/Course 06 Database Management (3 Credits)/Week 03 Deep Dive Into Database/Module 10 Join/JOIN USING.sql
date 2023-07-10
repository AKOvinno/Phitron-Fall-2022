select employees.employee_id, employees.first_name, departments.department_name
from employees JOIN departments USING ( department_id);