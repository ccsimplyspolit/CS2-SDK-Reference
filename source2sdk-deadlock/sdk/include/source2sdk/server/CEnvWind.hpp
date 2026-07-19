#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CEnvWindShared.hpp"

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
        // Size: 0x5d0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CEnvWindShared m_EnvWindShared"
        #pragma pack(push, 1)
        class CEnvWind : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::CEnvWindShared m_EnvWindShared; // 0x4a0            
            
            // Datamap fields:
            // void CEnvWindWindThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvWind because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvWind) == 0x5d0);
    };
};
