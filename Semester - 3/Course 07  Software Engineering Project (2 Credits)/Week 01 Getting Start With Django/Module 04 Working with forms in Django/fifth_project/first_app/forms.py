from django import forms  # here forms actually form api

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
    