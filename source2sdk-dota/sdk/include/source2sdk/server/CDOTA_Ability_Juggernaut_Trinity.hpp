#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x5d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Juggernaut_Trinity : public source2sdk::server::CDOTABaseAbility
        {
        public:
            VectorWS m_vStartPos; // 0x580            
            VectorWS m_vEndPos; // 0x58c            
            Vector m_vDirection; // 0x598            
            std::int32_t m_nCurrentJump; // 0x5a4            
            std::int32_t m_nProjectileID; // 0x5a8            
            uint8_t _pad05ac[0x4]; // 0x5ac
            // m_hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAlreadyHitList;
            char m_hAlreadyHitList[0x18]; // 0x5b0            
            std::int32_t max_jumps; // 0x5c8            
            float jump_speed; // 0x5cc            
            std::int32_t jump_attack_radius; // 0x5d0            
            std::int32_t attack_count; // 0x5d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Juggernaut_Trinity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Juggernaut_Trinity) == 0x5d8);
    };
};
