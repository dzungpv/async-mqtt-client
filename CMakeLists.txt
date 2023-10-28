set(COMPONENT_SRCDIRS
    "src" "src/AsyncMqttClient" "src/AsyncMqttClient/Packets" "src/AsyncMqttClient/Packets/Out"
)

set(COMPONENT_ADD_INCLUDEDIRS
    "src" "src/AsyncMqttClient" "src/AsyncMqttClient/Packets" "src/AsyncMqttClient/Packets/Out"
)

set(COMPONENT_REQUIRES
    "arduino-esp32"
    "AsyncTCP"
)

register_component()

target_compile_definitions(${COMPONENT_TARGET} PUBLIC -DESP32)
target_compile_options(${COMPONENT_TARGET} PRIVATE -fno-rtti)
