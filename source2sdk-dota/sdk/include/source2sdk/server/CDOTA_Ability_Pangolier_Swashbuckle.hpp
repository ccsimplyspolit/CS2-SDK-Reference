#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Pangolier_Swashbuckle : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad0580[0x10]; // 0x580
            float dash_speed; // 0x590            
            float start_radius; // 0x594            
            float end_radius; // 0x598            
            float range; // 0x59c            
            float damage; // 0x5a0            
            float attack_damage; // 0x5a4            
            std::int32_t procs_onhit_effects; // 0x5a8            
            float slow_duration; // 0x5ac            
            VectorWS m_vDashPosition; // 0x5b0            
            VectorWS m_vFacePosition; // 0x5bc            
            VectorWS m_vEndpoint; // 0x5c8            
            Vector m_vSlashDir; // 0x5d4            
            std::int32_t m_nDashProjectileID; // 0x5e0            
            VectorWS m_vDashProjectileLocation; // 0x5e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Pangolier_Swashbuckle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Pangolier_Swashbuckle) == 0x5f0);
    };
};
