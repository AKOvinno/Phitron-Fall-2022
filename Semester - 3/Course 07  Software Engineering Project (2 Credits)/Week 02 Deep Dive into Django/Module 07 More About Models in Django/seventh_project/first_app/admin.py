from django.contrib import admin
from first_app.models import StudentModel, StudentInfoModel, TeacherInfoModel, EmployeeModel, ManagerModel, Friend, Me, Person, Passport, Post, Student, Teacher
# Register your models here.
#admin.site.register(StudentModel)
# admin.site.register(StudentInfoModel)
# admin.site.register(TeacherInfoModel)
# admin.site.register(EmployeeModel)
# admin.site.register(ManagerModel)

# using model admin to customize admin 
# @admin.register(EmployeeModel)
# class EmployeeModelAdmin(admin.ModelAdmin):
#     list_display = ['id', 'name', 'city', 'designation']
# @admin.register(ManagerModel)
# class ManagerModelAdmin(admin.ModelAdmin):
#     list_display = ['id', 'name', 'city', 'designation', 'take_interview', 'hiring']

# @admin.register(Friend)
# class FriendModelAdmin(admin.ModelAdmin):
#     list_display = ['id', 'school', 'section', 'attendance', 'hw']
# @admin.register(Me)
# class MeModelAdmin(admin.ModelAdmin):
#     list_display = ['id', 'school', 'section', 'attendance', 'hw']

# one to one relationship
# @admin.register(Person)
# class PersonModelAdmin(admin.ModelAdmin):
#     list_display = ['id', 'name', 'city', 'email']
# @admin.register(Passport)
# class PassportModelAdmin(admin.ModelAdmin):
#     list_display = ['id', 'user', 'pass_number', 'page', 'validity']

# one to many relationship 
# @admin.register(Person)
# class PersonModelAdmin(admin.ModelAdmin):
#     list_display = ['id', 'name', 'city', 'email']
# @admin.register(Post)
# class PostModelAdmin(admin.ModelAdmin):
#     list_display = ['id', 'user', 'post_cap', 'post_details']

# many to many relationship
@admin.register(Student)
class StudentModelAdmin(admin.ModelAdmin):
    list_display = ['id', 'name', 'roll', 'class_name']
@admin.register(Teacher)
class TeacherModelAdmin(admin.ModelAdmin):
    list_display = ['id', 'name', 'subject', 'student_list', 'mobile']




