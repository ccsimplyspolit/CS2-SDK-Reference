#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CNetworkVarChainer.hpp"

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
        // Standard-layout class: true
        // Size: 0x2ed0
        // Has VTable
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDOTAGameManager
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
            uint8_t _pad2d30[0xa0]; // 0x2d30
            bool m_CurrentHeroAvailable[256]; // 0x2dd0
        };
        #pragma pack(pop)

        static_assert(offsetof(source2sdk::server::CDOTAGameManager, __m_pChainEntity) == 0x30);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bCustomGame) == 0x1630);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bEventGame) == 0x1631);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bGameModeWantsDefaultNeutralItemSchema) == 0x1632);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bGameModeFilteredAbilities) == 0x1633);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_szAddOnGame) == 0x1634);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_szAddOnMap) == 0x16b4);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pTutorialLessonKeyValues) == 0x2ce0);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pDivisionKeyValues) == 0x2ce8);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pMatchGroupsKeyValues) == 0x2cf0);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pAnimationStatues) == 0x2cf8);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pBotScriptsDedicatedServer) == 0x2d00);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pkvWardPlacementLocations) == 0x2d08);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pRegionKeyValues) == 0x2d10);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pSurveyQuestionData) == 0x2d18);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_AddonInfoKeyValues) == 0x2d20);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_CurrentHeroAvailable) == 0x2dd0);

        static_assert(sizeof(source2sdk::server::CDOTAGameManager) == 0x2ed0);
    };
};
