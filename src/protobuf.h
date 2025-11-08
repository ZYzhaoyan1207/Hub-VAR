#ifndef PROTOBUF_H
#define PROTOBUF_H

#include <string>

void serializeToProtobuf(const std::string& input, const std::string& output);
void deserializeFromProtobuf(const std::string& input, const std::string& output);

#endif
