#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"
#include "source2sdk/client/WeakPoint_t.hpp"

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
        // Size: 0xf08
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_bTakesDamage"
        // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        // static metadata: MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
        // static metadata: MNetworkVarNames "bool m_bDestroyed"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "bool m_bFinal"
        #pragma pack(push, 1)
        class C_Citadel_Destroyable_Building : public source2sdk::client::CCitadelAnimatingModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xcb0            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::WeakPoint_t> m_vecWeakPoints;
            char m_vecWeakPoints[0x68]; // 0xe98            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "DestroyedChanged"
            // metadata: MNotSaved
            bool m_bDestroyed; // 0xf00            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bActive; // 0xf01            
            // metadata: MNetworkEnable
            bool m_bFinal; // 0xf02            
            uint8_t _pad0f03[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_Destroyable_Building because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_Destroyable_Building) == 0xf08);
    };
};
