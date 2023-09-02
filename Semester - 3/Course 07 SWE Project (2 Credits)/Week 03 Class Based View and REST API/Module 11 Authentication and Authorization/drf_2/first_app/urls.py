from django.urls import include, path
from rest_framework import routers
from first_app.views import ProductViewSet, ProductReviewViewSet

router = routers.DefaultRouter()
router.register('products', ProductViewSet)
router.register('reviews', ProductReviewViewSet)


urlpatterns = [
    path('', include(router.urls)),
    #path('api_auth/', include('rest_framework.urls')),
]
