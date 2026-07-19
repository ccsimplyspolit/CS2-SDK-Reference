#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/sky3dparams_t.hpp"

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
        // Standard-layout class: false
        // Size: 0x548
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSkyCamera : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNotSaved
            source2sdk::server::sky3dparams_t m_skyboxData; // 0x4a8            
            CUtlStringToken m_skyboxSlotToken; // 0x538            
            bool m_bUseAngles; // 0x53c            
            uint8_t _pad053d[0x3]; // 0x53d
            // metadata: MNotSaved
            source2sdk::server::CSkyCamera* m_pNext; // 0x540            
            
            // Datamap fields:
            // void InputActivateSkybox; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSkyCamera because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSkyCamera) == 0x548);
    };
};
