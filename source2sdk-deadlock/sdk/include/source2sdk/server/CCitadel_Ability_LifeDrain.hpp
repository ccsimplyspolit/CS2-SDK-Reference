#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x1098
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tDrainLifeStopTime"
        // static metadata: MNetworkVarNames "GameTime_t m_tSlowStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_tSlowStopTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_LifeDrain : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_vecModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CModifierHandleTyped<source2sdk::server::CCitadelModifier>> m_vecModifiers;
            char m_vecModifiers[0x18]; // 0xf70            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_tDrainLifeStopTime; // 0xf88            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
            source2sdk::entity2::GameTime_t m_tSlowStartTime; // 0xf8c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
            source2sdk::entity2::GameTime_t m_tSlowStopTime; // 0xf90            
            uint8_t _pad0f94[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_LifeDrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_LifeDrain) == 0x1098);
    };
};
