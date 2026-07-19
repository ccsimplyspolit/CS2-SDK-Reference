#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysExplosion : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bExplodeOnSpawn; // 0x4a8            
            uint8_t _pad04a9[0x3]; // 0x4a9
            float m_flMagnitude; // 0x4ac            
            float m_flDamage; // 0x4b0            
            float m_radius; // 0x4b4            
            CUtlSymbolLarge m_targetEntityName; // 0x4b8            
            float m_flInnerRadius; // 0x4c0            
            float m_flPushScale; // 0x4c4            
            bool m_bConvertToDebrisWhenPossible; // 0x4c8            
            bool m_bAffectInvulnerableEnts; // 0x4c9            
            bool m_bDisablePushClamp; // 0x4ca            
            uint8_t _pad04cb[0x5]; // 0x4cb
            source2sdk::entity2::CEntityIOOutput m_OnPushedPlayer; // 0x4d0            
            
            // Datamap fields:
            // void InputExplode; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysExplosion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysExplosion) == 0x4e8);
    };
};
