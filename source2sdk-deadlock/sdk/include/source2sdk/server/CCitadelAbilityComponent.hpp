#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/server/AbilityResource_t.hpp"
#include "source2sdk/server/ConsumedComponentState_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBaseAbility;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x268
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle<CCitadelBaseAbility> m_vecAbilities"
        // static metadata: MNetworkVarNames "CHandle<CCitadelBaseAbility> m_vecThinkableAbilities"
        // static metadata: MNetworkVarNames "int32 m_arPendingAsyncAbilityReservationSlots"
        // static metadata: MNetworkVarNames "int32 m_arPendingAsyncAbilityReservationAbilityIDs"
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hSelectedAbility"
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hChannellingAbility"
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hCastDelayingAbility"
        // static metadata: MNetworkVarNames "EHANDLE m_hPreviouslySelectedAbility"
        // static metadata: MNetworkVarNames "bool m_bPreviousAbilityQueued"
        // static metadata: MNetworkVarNames "float m_flTimeScale"
        // static metadata: MNetworkVarNames "float m_flParticleTimeScale"
        // static metadata: MNetworkVarNames "bool m_bInInterruptState"
        // static metadata: MNetworkVarNames "AbilityResource_t m_ResourceStamina"
        // static metadata: MNetworkVarNames "AbilityResource_t m_ResourceAbility"
        // static metadata: MNetworkVarNames "ConsumedComponentState_t m_vecConsumedComponents"
        #pragma pack(push, 1)
        class CCitadelAbilityComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0x78]; // 0x8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Abilities"
            // metadata: MNetworkPriority "32"
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CCitadelBaseAbility>> m_vecAbilities;
            char m_vecAbilities[0x18]; // 0x80            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Abilities"
            // metadata: MNetworkPriority "32"
            // m_vecThinkableAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CCitadelBaseAbility>> m_vecThinkableAbilities;
            char m_vecThinkableAbilities[0x18]; // 0x98            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Abilities"
            // metadata: MNetworkPriority "32"
            // m_arPendingAsyncAbilityReservationSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::int32_t> m_arPendingAsyncAbilityReservationSlots;
            char m_arPendingAsyncAbilityReservationSlots[0x18]; // 0xb0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Abilities"
            // metadata: MNetworkPriority "32"
            // m_arPendingAsyncAbilityReservationAbilityIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::int32_t> m_arPendingAsyncAbilityReservationAbilityIDs;
            char m_arPendingAsyncAbilityReservationAbilityIDs[0x18]; // 0xc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AbiCompSelectedAbilityChanged"
            // m_hSelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hSelectedAbility;
            char m_hSelectedAbility[0x4]; // 0xe0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_hChannellingAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hChannellingAbility;
            char m_hChannellingAbility[0x4]; // 0xe4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_hCastDelayingAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hCastDelayingAbility;
            char m_hCastDelayingAbility[0x4]; // 0xe8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_hPreviouslySelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPreviouslySelectedAbility;
            char m_hPreviouslySelectedAbility[0x4]; // 0xec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bPreviousAbilityQueued; // 0xf0            
            uint8_t _pad00f1[0x3]; // 0xf1
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AbiCompTimeScaleChanged"
            float m_flTimeScale; // 0xf4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AbiCompParticleTimeScaleChanged"
            float m_flParticleTimeScale; // 0xf8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInInterruptState; // 0xfc            
            uint8_t _pad00fd[0x3]; // 0xfd
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::server::AbilityResource_t m_ResourceStamina; // 0x100            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::server::AbilityResource_t m_ResourceAbility; // 0x120            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_vecConsumedComponents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::ConsumedComponentState_t> m_vecConsumedComponents;
            char m_vecConsumedComponents[0x68]; // 0x140            
            uint8_t _pad01a8[0x48]; // 0x1a8
            std::uint32_t m_nExecuteAbilityMask; // 0x1f0            
            uint8_t _pad01f4[0x4]; // 0x1f4
            bool m_bSelectedEffectsStarted; // 0x1f8            
            uint8_t _pad01f9[0x6f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelAbilityComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelAbilityComponent) == 0x268);
    };
};
