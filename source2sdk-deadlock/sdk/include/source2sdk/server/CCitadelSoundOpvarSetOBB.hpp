#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x4f0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "string_t m_iszStackName"
        // static metadata: MNetworkVarNames "string_t m_iszOperatorName"
        // static metadata: MNetworkVarNames "string_t m_iszOpvarName"
        // static metadata: MNetworkVarNames "Vector m_vDistanceInnerMins"
        // static metadata: MNetworkVarNames "Vector m_vDistanceInnerMaxs"
        // static metadata: MNetworkVarNames "Vector m_vDistanceOuterMins"
        // static metadata: MNetworkVarNames "Vector m_vDistanceOuterMaxs"
        // static metadata: MNetworkVarNames "int m_nAABBDirection"
        #pragma pack(push, 1)
        class CCitadelSoundOpvarSetOBB : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszStackName; // 0x4a0            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOperatorName; // 0x4a8            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOpvarName; // 0x4b0            
            // metadata: MNetworkEnable
            Vector m_vDistanceInnerMins; // 0x4b8            
            // metadata: MNetworkEnable
            Vector m_vDistanceInnerMaxs; // 0x4c4            
            // metadata: MNetworkEnable
            Vector m_vDistanceOuterMins; // 0x4d0            
            // metadata: MNetworkEnable
            Vector m_vDistanceOuterMaxs; // 0x4dc            
            // metadata: MNetworkEnable
            std::int32_t m_nAABBDirection; // 0x4e8            
            uint8_t _pad04ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelSoundOpvarSetOBB because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelSoundOpvarSetOBB) == 0x4f0);
    };
};
