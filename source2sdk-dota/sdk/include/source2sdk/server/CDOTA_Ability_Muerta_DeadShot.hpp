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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Muerta_DeadShot : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float radius; // 0x580            
            float speed; // 0x584            
            VectorWS m_vTargetPos; // 0x588            
            VectorWS m_vEndpoint; // 0x594            
            // m_hTreeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTreeTarget;
            char m_hTreeTarget[0x4]; // 0x5a0            
            Vector m_vRicochetDir; // 0x5a4            
            uint8_t _pad05b0[0x18]; // 0x5b0
            // m_vEnemyHeroVisibilityOnCast has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vEnemyHeroVisibilityOnCast;
            char m_vEnemyHeroVisibilityOnCast[0x18]; // 0x5c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Muerta_DeadShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Muerta_DeadShot) == 0x5e0);
    };
};
