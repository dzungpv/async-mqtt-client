#include "Disconn.hpp"

using AsyncMqttClientInternals::DisconnOutPacket;

DisconnOutPacket::DisconnOutPacket() {
  _data[0] = AsyncMqttClientInternals::PacketType.DISCONNECT;
  _data[0] = _data[0] << 4;
  _data[0] = _data[0] | AsyncMqttClientInternals::HeaderFlag.DISCONNECT_RESERVED;
  _data[1] = 0;
}

const uint8_t* DisconnOutPacket::data() const {
  return _data;
}

size_t DisconnOutPacket::size() const {
  return 2;
}
