#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/AI_VolumetricEventHandle_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CAI_VolumetricEventSensor_OnStartedArgs_t
        {
        public:
            source2sdk::server::AI_VolumetricEventHandle_t hEvent; // 0x0            
            VectorWS vOrigin; // 0x8            
            float flRadius; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEventSensor_OnStartedArgs_t, hEvent) == 0x0);
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEventSensor_OnStartedArgs_t, vOrigin) == 0x8);
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEventSensor_OnStartedArgs_t, flRadius) == 0x14);
        
        static_assert(sizeof(source2sdk::server::CAI_VolumetricEventSensor_OnStartedArgs_t) == 0x18);
    };
};
