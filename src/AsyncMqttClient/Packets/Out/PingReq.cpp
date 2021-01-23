#include "PingReq.hpp"

using AsyncMqttClientInternals::PingReqOutPacket;

PingReqOutPacket::PingReqOutPacket() {
  _data[0] = AsyncMqttClientInternals::PacketType.PINGREQ;
  _data[0] = _data[0] << 4;
  _data[0] = _data[0] | AsyncMqttClientInternals::HeaderFlag.PINGREQ_RESERVED;
  _data[1] = 0;
}

const uint8_t* PingReqOutPacket::data() const {
  return _data;
}

size_t PingReqOutPacket::size() const {
  return 2;
}
