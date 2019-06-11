有一个介绍这个cJSON使用的比较好的博客，看完这个博客之后就会很清楚了。
https://www.cnblogs.com/chineseboy/p/3959852.html



cJSON *root;
root = cJSON_CreateObject();
cJSON_AddStringToObject(root,"baselib_name",uuid); 
cJSON_AddStringToObject(root,"image",requestStr.data());
cJSON_AddNumberToObject(root,"ts_begin",0);
cJSON_AddNumberToObject(root,"ts_end",endTime);
cJSON_AddNumberToObject(root,"min_sim",min_score);
char *s = cJSON_PrintUnformatted(root);	