#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/WeakPoint_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1050
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_bTakesDamage"
        // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        // static metadata: MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
        // static metadata: MNetworkVarNames "bool m_bDestroyed"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "bool m_bFinal"
        #pragma pack(push, 1)
        class CCitadel_Destroyable_Building : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xbf0            
            source2sdk::entity2::CEntityIOOutput m_OnDestroyed; // 0xc10            
            source2sdk::entity2::CEntityIOOutput m_OnRevitilized; // 0xc28            
            // m_OnDamageTaken has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnDamageTaken;
            char m_OnDamageTaken[0x20]; // 0xc40            
            // m_OnLifeChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnLifeChanged;
            char m_OnLifeChanged[0x20]; // 0xc60            
            source2sdk::entity2::CEntityIOOutput m_OnBecomeActive; // 0xc80            
            source2sdk::entity2::CEntityIOOutput m_OnBecomeInvulnerable; // 0xc98            
            source2sdk::entity2::CEntityIOOutput m_OnBecomeVulnerable; // 0xcb0            
            source2sdk::entity2::CEntityIOOutput m_OnUnderAttack; // 0xcc8            
            source2sdk::entity2::CEntityIOOutput m_OnAttackSubsided; // 0xce0            
            std::int32_t m_nBuildingHealth; // 0xcf8            
            uint8_t _pad0cfc[0x4]; // 0xcfc
            std::int32_t m_iLane; // 0xd00            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flDestroyedTime; // 0xd04            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastDamagedTime; // 0xd08            
            // metadata: MNotSaved
            QAngle m_angOriginal; // 0xd0c            
            uint8_t _pad0d18[0x20]; // 0xd18
            CUtlSymbolLarge m_backdoorProtectionTrigger; // 0xd38            
            uint8_t _pad0d40[0x8]; // 0xd40
            CUtlSymbolLarge m_strTrooperApproach; // 0xd48            
            uint8_t _pad0d50[0x20]; // 0xd50
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xd70            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::WeakPoint_t> m_vecWeakPoints;
            char m_vecWeakPoints[0x68]; // 0xfd8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "DestroyedChanged"
            // metadata: MNotSaved
            bool m_bDestroyed; // 0x1040            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bActive; // 0x1041            
            // metadata: MNetworkEnable
            bool m_bFinal; // 0x1042            
            uint8_t _pad1043[0xd];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Destroyable_Building because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Destroyable_Building) == 0x1050);
    };
};
