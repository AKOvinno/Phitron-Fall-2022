# Generated by Django 4.2.4 on 2023-08-09 09:18

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('book', '0001_initial'),
    ]

    operations = [
        migrations.AlterField(
            model_name='bookstoremodel',
            name='last_pub',
            field=models.DateTimeField(auto_now=True),
        ),
    ]
