from django.shortcuts import render
from first_app.forms import StudentForm
from first_app.models import Teacher, Student
# Create your views here.
def home(request):
    #std = StudentForm()
    if request.method == 'POST':
        form = StudentForm(request.POST)
        if form.is_valid():
            form.save()
            print(form.cleaned_data)
    else:
        form = StudentForm()
    return render(request, 'home.html', {'form': form})
    
# without using related_name
# def showData(request):
#     # students list for one teacher
#     teacher = Teacher.objects.get(name='Tarek')
#     students = teacher.student.all()
#     print('Students Name: ')
#     for stud in students:
#         print(stud.name)
#     # teachers list for one student
#     student = Student.objects.get(name='Arup')
#     teachers = student.teacher_set.all()
#     print('Teachers Name: ')
#     for teacher in teachers:
#         print(teacher.name)
#     return render(request, 'show_data.html')

# using related_name='teachers' from models.py
def showData(request):
    # students list for one teacher
    teacher = Teacher.objects.get(name='Tarek')
    students = teacher.student.all()
    print('Students Name: ')
    for stud in students:
        print(stud.name, stud.roll, stud.class_name)
    # teachers list for one student
    student = Student.objects.get(name='Arup')
    teachers = student.teachers.all()
    print('Teachers Name: ')
    for teacher in teachers:
        print(f"{teacher.name}: {teacher.subject} {teacher.mobile}")
    return render(request, 'show_data.html')

