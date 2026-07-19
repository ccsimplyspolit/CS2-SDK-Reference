#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CModifierHandleBase.hpp"
#include "source2sdk/client/ModifierRuntimeHandle_t.hpp"
#include "source2sdk/client/ModifierSerialNumber_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct IModifierTrackedObject;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x90
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CBaseModifier
        {
        public:
            uint8_t _pad0000[0x28]; // 0x0
            source2sdk::client::ModifierSerialNumber_t m_nSerialNumber; // 0x28            
            source2sdk::entity2::GameTime_t m_flLastAppliedTime; // 0x2c            
            source2sdk::entity2::GameTime_t m_flCreationTime; // 0x30            
            float m_flDuration; // 0x34            
            // m_hCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCaster;
            char m_hCaster[0x4]; // 0x38            
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAbility;
            char m_hAbility[0x4]; // 0x3c            
            source2sdk::client::CModifierHandleBase m_hAuraProvider; // 0x40            
            bool m_bInAuraRange; // 0x58            
            uint8_t _pad0059[0x3]; // 0x59
            CUtlStringToken m_nAbilitySubclassID; // 0x5c            
            std::uint8_t m_iAttributes; // 0x60            
            std::uint8_t m_iTeam; // 0x61            
            std::int16_t m_iStackCount; // 0x62            
            std::int16_t m_iMaxStackCount; // 0x64            
            uint8_t _pad0066[0x2]; // 0x66
            // metadata: MNotSaved
            // m_pVecStackDecayTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t>* m_pVecStackDecayTimes;
            char m_pVecStackDecayTimes[0x8]; // 0x68            
            std::uint8_t m_eDestroyReason; // 0x70            
            bool m_bDisabled; // 0x71            
            bool m_bSuppressSendModifier; // 0x72            
            uint8_t _pad0073[0x1]; // 0x73
            float m_flThinkInterval; // 0x74            
            source2sdk::entity2::GameTime_t m_flThinkIntervalStartTime; // 0x78            
            float m_flTimeScale; // 0x7c            
            // metadata: MNotSaved
            // m_pVecTrackedObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::IModifierTrackedObject*>* m_pVecTrackedObjects;
            char m_pVecTrackedObjects[0x8]; // 0x80            
            // metadata: MNotSaved
            source2sdk::client::ModifierRuntimeHandle_t m_hModifierListHandle; // 0x88            
            uint8_t _pad008c[0x4];
            
            // Datamap fields:
            // void m_pModifierProp; // 0x20
            // void m_pSubclassVData; // 0x10
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_nSerialNumber) == 0x28);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_flLastAppliedTime) == 0x2c);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_flCreationTime) == 0x30);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_flDuration) == 0x34);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_hCaster) == 0x38);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_hAbility) == 0x3c);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_hAuraProvider) == 0x40);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_bInAuraRange) == 0x58);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_nAbilitySubclassID) == 0x5c);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_iAttributes) == 0x60);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_iTeam) == 0x61);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_iStackCount) == 0x62);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_iMaxStackCount) == 0x64);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_pVecStackDecayTimes) == 0x68);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_eDestroyReason) == 0x70);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_bDisabled) == 0x71);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_bSuppressSendModifier) == 0x72);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_flThinkInterval) == 0x74);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_flThinkIntervalStartTime) == 0x78);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_flTimeScale) == 0x7c);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_pVecTrackedObjects) == 0x80);
        static_assert(offsetof(source2sdk::client::CBaseModifier, m_hModifierListHandle) == 0x88);
        
        static_assert(sizeof(source2sdk::client::CBaseModifier) == 0x90);
    };
};
