#ifndef JSONUTIL_H
#define JSONUTIL_H

#include "rapidjson/rapidjson.h"
#include "rapidjson/document.h"
#include "rapidjson/reader.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

void deserializer(const char* json);
void deserializer(std::string json);

#endif