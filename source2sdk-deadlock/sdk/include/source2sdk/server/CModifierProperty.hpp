#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ModifierPropRuntimeHandle_t.hpp"
#include "source2sdk/client/OwnerModifierEventListener_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
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
        struct CBaseModifier;
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
        // Standard-layout class: true
        // Size: 0x270
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bAllowModifiersOnDeadEntities"
        // static metadata: MNetworkVarNames "uint32 m_nDisabledGroups"
        // static metadata: MNetworkVarNames "uint32 m_bvEnabledStateMask"
        // static metadata: MNetworkVarNames "uint32 m_bvDisabledStateMask"
        // static metadata: MNetworkVarNames "uint32 m_bvEnabledPredictedStateMask"
        #pragma pack(push, 1)
        class CModifierProperty
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x8            
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            // metadata: MSaveOpsForField
            // m_vecModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CBaseModifier*> m_vecModifiers;
            char m_vecModifiers[0x18]; // 0x38            
            uint8_t _pad0050[0x174]; // 0x50
            // metadata: MNotSaved
            bool m_bModifierStatesDirty; // 0x1c4            
            // metadata: MNotSaved
            bool m_bPredictedOwner; // 0x1c5            
            // metadata: MNetworkEnable
            bool m_bAllowModifiersOnDeadEntities; // 0x1c6            
            // metadata: MNotSaved
            std::int8_t m_iLockRefCount; // 0x1c7            
            // metadata: MNotSaved
            source2sdk::client::ModifierPropRuntimeHandle_t m_hHandle; // 0x1c8            
            uint8_t _pad01ca[0x2]; // 0x1ca
            // metadata: MNotSaved
            std::uint32_t m_nBroadcastEventListenerMask; // 0x1cc            
            // metadata: MNotSaved
            source2sdk::client::ParticleIndex_t m_nCachedHighestParticleIndex; // 0x1d0            
            uint8_t _pad01d4[0x4]; // 0x1d4
            // metadata: MSaveOpsForField
            // m_pNotifyOwnerEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::OwnerModifierEventListener_t>* m_pNotifyOwnerEvents;
            char m_pNotifyOwnerEvents[0x8]; // 0x1d8            
            // metadata: MNetworkEnable
            std::uint32_t m_nDisabledGroups; // 0x1e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "modifierStatesChanged"
            std::uint32_t m_bvEnabledStateMask[10]; // 0x1e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "modifierStatesChanged"
            std::uint32_t m_bvDisabledStateMask[10]; // 0x20c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "modifierStatesChanged"
            std::uint32_t m_bvEnabledPredictedStateMask[10]; // 0x234            
            uint8_t _pad025c[0xc]; // 0x25c
            bool m_bParentWantsModifierStateChangeCallback; // 0x268            
            uint8_t _pad0269[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CModifierProperty, __m_pChainEntity) == 0x8);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_hOwner) == 0x30);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_vecModifiers) == 0x38);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bModifierStatesDirty) == 0x1c4);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bPredictedOwner) == 0x1c5);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bAllowModifiersOnDeadEntities) == 0x1c6);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_iLockRefCount) == 0x1c7);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_hHandle) == 0x1c8);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_nBroadcastEventListenerMask) == 0x1cc);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_nCachedHighestParticleIndex) == 0x1d0);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_pNotifyOwnerEvents) == 0x1d8);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_nDisabledGroups) == 0x1e0);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bvEnabledStateMask) == 0x1e4);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bvDisabledStateMask) == 0x20c);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bvEnabledPredictedStateMask) == 0x234);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bParentWantsModifierStateChangeCallback) == 0x268);
        
        static_assert(sizeof(source2sdk::server::CModifierProperty) == 0x270);
    };
};
