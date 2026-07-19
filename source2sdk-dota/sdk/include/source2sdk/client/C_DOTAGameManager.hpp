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
        // Size: 0x3340
        // Has VTable
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_DOTAGameManager
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x30            
            uint8_t _pad0058[0x15c0]; // 0x58
            bool m_bCustomGame; // 0x1618            
            bool m_bEventGame; // 0x1619            
            bool m_bGameModeWantsDefaultNeutralItemSchema; // 0x161a            
            bool m_bGameModeFilteredAbilities; // 0x161b            
            char m_szAddOnGame[128]; // 0x161c            
            char m_szAddOnMap[128]; // 0x169c            
            uint8_t _pad171c[0x15ac]; // 0x171c
            KeyValues* m_pTutorialLessonKeyValues; // 0x2cc8            
            KeyValues* m_pDivisionKeyValues; // 0x2cd0            
            KeyValues* m_pMatchGroupsKeyValues; // 0x2cd8            
            KeyValues* m_pAnimationStatues; // 0x2ce0            
            KeyValues* m_pBotScriptsDedicatedServer; // 0x2ce8            
            KeyValues* m_pkvWardPlacementLocations; // 0x2cf0            
            KeyValues* m_pRegionKeyValues; // 0x2cf8            
            KeyValues* m_pSurveyQuestionData; // 0x2d00            
            KeyValues3 m_AddonInfoKeyValues; // 0x2d08            
            uint8_t _pad2d18[0x28]; // 0x2d18
            KeyValues* m_pCountryKeyValues; // 0x2d40            
            uint8_t _pad2d48[0x4d8]; // 0x2d48
            bool m_bLoadedPortraits[9]; // 0x3220            
            uint8_t _pad3229[0x7]; // 0x3229
            KeyValues* m_pControlGroupsKeyValues; // 0x3230            
            KeyValues3* m_pItemSuggestPreferenceKeyValues; // 0x3238            
            bool m_CurrentHeroAvailable[256]; // 0x3240            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, __m_pChainEntity) == 0x30);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bCustomGame) == 0x1618);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bEventGame) == 0x1619);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bGameModeWantsDefaultNeutralItemSchema) == 0x161a);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bGameModeFilteredAbilities) == 0x161b);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_szAddOnGame) == 0x161c);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_szAddOnMap) == 0x169c);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pTutorialLessonKeyValues) == 0x2cc8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pDivisionKeyValues) == 0x2cd0);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pMatchGroupsKeyValues) == 0x2cd8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pAnimationStatues) == 0x2ce0);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pBotScriptsDedicatedServer) == 0x2ce8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pkvWardPlacementLocations) == 0x2cf0);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pRegionKeyValues) == 0x2cf8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pSurveyQuestionData) == 0x2d00);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_AddonInfoKeyValues) == 0x2d08);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pCountryKeyValues) == 0x2d40);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bLoadedPortraits) == 0x3220);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pControlGroupsKeyValues) == 0x3230);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pItemSuggestPreferenceKeyValues) == 0x3238);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_CurrentHeroAvailable) == 0x3240);
        
        static_assert(sizeof(source2sdk::client::C_DOTAGameManager) == 0x3340);
    };
};
