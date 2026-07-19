#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EOverworldFortuneModifier.hpp"
#include "source2sdk/client/EOverworldFortuneRequirement.hpp"
#include "source2sdk/client/EOverworldFortuneReward.hpp"
#include "source2sdk/client/OverworldTarotCardID_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x60
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldTarotCard
        {
        public:
            // metadata: MVDataUniqueMonotonicInt "_editor/next_id_tarot_card"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::OverworldTarotCardID_t m_unID; // 0x0            
            uint8_t _pad0001[0x7]; // 0x1
            // metadata: MPropertyDescription
            CUtlString m_sName; // 0x8            
            // metadata: MPropertyDescription
            bool m_bIsCardBack; // 0x10            
            uint8_t _pad0011[0x3]; // 0x11
            // metadata: MPropertyDescription
            source2sdk::client::EOverworldFortuneReward m_eFortuneReward; // 0x14            
            // metadata: MPropertyDescription
            source2sdk::client::EOverworldFortuneRequirement m_eFortuneRequirement; // 0x18            
            // metadata: MPropertyDescription
            source2sdk::client::EOverworldFortuneModifier m_eFortuneModifier; // 0x1c            
            // metadata: MPropertyDescription
            CUtlString m_sFortunePosition1; // 0x20            
            // metadata: MPropertyDescription
            CUtlString m_sFortunePosition2; // 0x28            
            // metadata: MPropertyDescription
            CUtlString m_sFortunePosition3; // 0x30            
            CUtlString m_sSoundEventName; // 0x38            
            // m_vecSoundEventOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecSoundEventOptions;
            char m_vecSoundEventOptions[0x18]; // 0x40            
            // metadata: MPropertyDescription
            std::uint32_t m_unUnlockReward; // 0x58            
            uint8_t _pad005c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTarotCard, m_unID) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTarotCard, m_sName) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTarotCard, m_bIsCardBack) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTarotCard, m_eFortuneReward) == 0x14);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTarotCard, m_eFortuneRequirement) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTarotCard, m_eFortuneModifier) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTarotCard, m_sFortunePosition1) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTarotCard, m_sFortunePosition2) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTarotCard, m_sFortunePosition3) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTarotCard, m_sSoundEventName) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTarotCard, m_vecSoundEventOptions) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTarotCard, m_unUnlockReward) == 0x58);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldTarotCard) == 0x60);
    };
};
