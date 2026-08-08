#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CNetworkVarChainer.hpp"

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
        // Size: 0x3358
        // Has VTable
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_DOTAGameManager
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x30
            uint8_t _pad0058[0x15d8]; // 0x58
            bool m_bCustomGame; // 0x1630
            bool m_bEventGame; // 0x1631
            bool m_bGameModeWantsDefaultNeutralItemSchema; // 0x1632
            bool m_bGameModeFilteredAbilities; // 0x1633
            char m_szAddOnGame[128]; // 0x1634
            char m_szAddOnMap[128]; // 0x16b4
            uint8_t _pad1734[0x15ac]; // 0x1734
            KeyValues* m_pTutorialLessonKeyValues; // 0x2ce0
            KeyValues* m_pDivisionKeyValues; // 0x2ce8
            KeyValues* m_pMatchGroupsKeyValues; // 0x2cf0
            KeyValues* m_pAnimationStatues; // 0x2cf8
            KeyValues* m_pBotScriptsDedicatedServer; // 0x2d00
            KeyValues* m_pkvWardPlacementLocations; // 0x2d08
            KeyValues* m_pRegionKeyValues; // 0x2d10
            KeyValues* m_pSurveyQuestionData; // 0x2d18
            KeyValues3 m_AddonInfoKeyValues; // 0x2d20
            uint8_t _pad2d30[0x28]; // 0x2d30
            KeyValues* m_pCountryKeyValues; // 0x2d58
            uint8_t _pad2d60[0x4d8]; // 0x2d60
            bool m_bLoadedPortraits[9]; // 0x3238
            uint8_t _pad3241[0x7]; // 0x3241
            KeyValues* m_pControlGroupsKeyValues; // 0x3248
            KeyValues3* m_pItemSuggestPreferenceKeyValues; // 0x3250
            bool m_CurrentHeroAvailable[256]; // 0x3258
        };
        #pragma pack(pop)

        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, __m_pChainEntity) == 0x30);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bCustomGame) == 0x1630);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bEventGame) == 0x1631);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bGameModeWantsDefaultNeutralItemSchema) == 0x1632);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bGameModeFilteredAbilities) == 0x1633);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_szAddOnGame) == 0x1634);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_szAddOnMap) == 0x16b4);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pTutorialLessonKeyValues) == 0x2ce0);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pDivisionKeyValues) == 0x2ce8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pMatchGroupsKeyValues) == 0x2cf0);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pAnimationStatues) == 0x2cf8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pBotScriptsDedicatedServer) == 0x2d00);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pkvWardPlacementLocations) == 0x2d08);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pRegionKeyValues) == 0x2d10);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pSurveyQuestionData) == 0x2d18);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_AddonInfoKeyValues) == 0x2d20);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pCountryKeyValues) == 0x2d58);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bLoadedPortraits) == 0x3238);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pControlGroupsKeyValues) == 0x3248);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pItemSuggestPreferenceKeyValues) == 0x3250);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_CurrentHeroAvailable) == 0x3258);

        static_assert(sizeof(source2sdk::client::C_DOTAGameManager) == 0x3358);
    };
};
