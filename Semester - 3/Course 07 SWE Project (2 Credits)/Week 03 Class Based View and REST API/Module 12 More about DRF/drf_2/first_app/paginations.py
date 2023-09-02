from rest_framework.pagination import PageNumberPagination,LimitOffsetPagination, CursorPagination

class ProductPagination(PageNumberPagination):
    page_size = 3 # total 10 contents
    page_query_param = 'page_number'
    # User can change the above page size on their own
    page_size_query_param = 'size'
    max_size_page = 4
    
# Here limit means the max product show and offset starting position
class ProductLimitOffsetPagination(LimitOffsetPagination):
    default_limit = 2
    limit_query_param = '1'
    offset_query_param = 'start'
    max_limit = 3
class ProductCursorPagination(CursorPagination):
    page_size = 3
    ordering = 'price'
    cursor_query_param ='data'
    
    