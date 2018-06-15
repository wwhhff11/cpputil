#include <iostream>
#include "rapidjson/rapidjson.h"
#include "rapidjson/document.h"
#include "rapidjson/reader.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

/**
 * 解析json串
 * @param json
 * @return
 */
void deserializer(const char *json) {
    rapidjson::Document doc;
    doc.Parse(json);
    std::cout << doc["a"].GetInt() << std::endl;
}

/**
 * 解析json串
 * @param json
 * @return
 */
void deserializer(std::string json) {
    deserializer(json.c_str());
}