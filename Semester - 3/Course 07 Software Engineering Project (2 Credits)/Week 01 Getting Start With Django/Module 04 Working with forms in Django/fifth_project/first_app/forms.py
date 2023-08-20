from django import forms  # here forms actually form api
from django.core import validators
# widgets == field to html input and it's very much powerful

class contactForm(forms.Form): # here we are inhering Form from forms
    name = forms.CharField(label="Full Name : ", initial="Rahim", help_text="Total length must be within 70 characters", required=False, disabled=False, widget = forms.Textarea(attrs={'id' : 'text_area', 'class': 'class1 class2', 'placeholder': 'Enter your name'}))
    
    email = forms.EmailField(label="User Email", widget = forms.Textarea(attrs={'id' : 'text_area', 'class': 'class1 class2', 'placeholder': 'Enter your Email'}))
    
    # age = forms.IntegerField()
    # weight = forms.FloatField()
    # balance = forms.DecimalField()
    age = forms.CharField(widget=forms.NumberInput)
    check = forms.BooleanField()
    # we can use charfield() with widget instead of datefield and datetimefield 
    birthday = forms.DateField(widget=forms.DateInput(attrs = {'type': 'date'}))
    appointment = forms.DateTimeField(widget=forms.DateInput(attrs = {'type': 'datetime-local'}))
    
    CHOICES = [('S', 'Small'), ('M', 'Medium'), ('L', 'Large')]
    size = forms.ChoiceField(choices=CHOICES, widget=forms.RadioSelect)
    
    meal = [('P', 'Pepperoni'), ('M', 'Mashroom'), ('B', 'Beef')]
    pizza = forms.MultipleChoiceField(choices=meal, widget=forms.CheckboxSelectMultiple)
    
    file = forms.FileField(label="Upload File")
    
# cleaning an validating from data
# class StudentData(forms.Form):
#     name = forms.CharField(widget=forms.TextInput)
#     email = forms.CharField(widget=forms.EmailInput)
#     def clean_name(self):
#         value_name = self.cleaned_data['name']
#         if len(value_name) < 10:
#             raise forms.ValidationError("Enter a name with 10 characters")
#         return value_name
#     def clean_email(self):
#         value_name = self.cleaned_data['email']
#         if '.com' not in value_name:
#             raise forms.ValidationError("Your email must contain .com")
#         return value_name
    
#     # now writing all the validation in one function
#     def clean(self):
#         cleaned_data = super().clean()
#         value_name = self.cleaned_data['name']
#         value_email = self.cleaned_data['email']
#         if len(value_name) < 10:
#              raise forms.ValidationError("Enter a name with 10 characters")
#         if '.com' not in value_email:
#              raise forms.ValidationError("Your email must contain .com")
#         return cleaned_data

# custom validator for text
def len_check(value):
    if len(value) < 10:
        raise forms.ValidationError("Enter a value at least 10 chars")
     
class StudentData(forms.Form):
    name = forms.CharField(widget=forms.TextInput, validators=[validators.MinLengthValidator(10, message='Enter a name with at least 10 characters')])
    
    # custom validator used
    text = forms.CharField(widget=forms.TextInput, validators=[len_check])
    
    email = forms.CharField(widget=forms.EmailInput, validators=[validators.EmailValidator(message='Enter a valid Email')])
    
    age = forms.IntegerField(validators=[validators.MaxValueValidator(35, message="age must be maximum 35"),validators.MinValueValidator(25, message="age must be at least 25")])
    
    file = forms.FileField(validators=[validators.FileExtensionValidator(allowed_extensions=['pdf', 'mp4'], message='File Extension must be ended with .pdf and .mp4')])
    
# password matching project
class passwordValidationProject(forms.Form):
    name = forms.CharField(widget=forms.TextInput)
    password = forms.CharField(widget=forms.PasswordInput)
    confirm_password = forms.CharField(widget=forms.PasswordInput)
    
    def clean(self):
        cleaned_data = super().clean
        value_password = self.cleaned_data['password']
        value_confirm_password = self.cleaned_data['confirm_password']
        value_name = self.cleaned_data['name']
        if value_password != value_confirm_password:
            raise forms.ValidationError("Password doesn't match")
        if len(value_name) < 15:
            raise forms.ValidationError("Name must be at least 15 chars")
        return cleaned_data