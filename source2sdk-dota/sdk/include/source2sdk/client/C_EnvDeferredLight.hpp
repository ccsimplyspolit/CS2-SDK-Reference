#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_ModelPointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd30
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_EnvDeferredLight : public source2sdk::client::C_ModelPointEntity
        {
        public:
            uint8_t _pad0a88[0x2a8];
            // Datamap fields:
            // CDeferredLightBase CDeferredLightBase; // 0xa88
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // Color InputSetLightColor; // 0x0
            // float InputSetLightIntensity; // 0x0
            // CUtlSymbolLarge InputSetLightIntensityOverTime; // 0x0
            // float InputSetLightRadius; // 0x0
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_EnvDeferredLight) == 0xd30);
    };
};
