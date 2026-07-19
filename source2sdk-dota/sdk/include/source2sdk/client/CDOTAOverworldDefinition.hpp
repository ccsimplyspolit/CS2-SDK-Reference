#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAEventActionGrantAndClaimPairTrigger.hpp"
#include "source2sdk/client/CDOTAEventActionTrigger.hpp"
#include "source2sdk/client/CDOTAOverworldPathColorRule.hpp"
#include "source2sdk/client/CDOTAOverworldTheme.hpp"
#include "source2sdk/client/DOTAOverworldReleaseScheduledUnlock_t.hpp"
#include "source2sdk/client/EEvent.hpp"
#include "source2sdk/client/EOverworldProgressionType.hpp"
#include "source2sdk/client/OverworldID_t.hpp"
#include "source2sdk/client/OverworldNodeID_t.hpp"
#include "source2sdk/client/OverworldTokenID_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldCharacter;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldClickable;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldEncounter;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldFortuneForcedReveal;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldFortuneTellerFixedReward;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldFortuneTellerReward;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldFortuneTellerStoryNode;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldHero;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldHeroReward;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldNode;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldPath;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldRoom;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldRoomGroup;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldTarotCard;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldToken;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x618
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataSingleton
        #pragma pack(push, 1)
        class CDOTAOverworldDefinition
        {
        public:
            CUtlString generic_data_type; // 0x0            
            // metadata: MPropertyDescription
            source2sdk::client::OverworldID_t m_unID; // 0x8            
            uint8_t _pad0009[0x7]; // 0x9
            // metadata: MPropertyDescription
            CUtlString m_sKey; // 0x10            
            // metadata: MPropertyDescription "The event related to this overworld. Used for rewards and expiration."
            source2sdk::client::EEvent m_eAssociatedEvent; // 0x18            
            source2sdk::client::EOverworldProgressionType m_eProgressionType; // 0x1c            
            std::uint8_t m_unOverworldVersion; // 0x20            
            uint8_t _pad0021[0x7]; // 0x21
            // metadata: MPropertyDescription "Optional name of the token trader encounter. Useful if the encounter isn't attached to a node on the overworld."
            CUtlString m_sTokenTraderEncounterName; // 0x28            
            // metadata: MPropertyDescription "An event action to grant whenever a node is unlocked."
            CUtlString m_sNodeUnlockEventAction; // 0x30            
            Vector2D m_vGridOffset; // 0x38            
            std::uint32_t m_unGridSize; // 0x40            
            std::uint32_t m_unNodeGridSize; // 0x44            
            std::uint32_t m_unMapWidth; // 0x48            
            std::uint32_t m_unMapHeight; // 0x4c            
            // metadata: MPropertyDescription "Different camera/zoom levels, for use in 3D scene"
            // m_vecCameraDistances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecCameraDistances;
            char m_vecCameraDistances[0x18]; // 0x50            
            // metadata: MPropertyDescription "Minimum camera distance. Lower means more zoom in possible"
            float m_flMinCameraDistance; // 0x68            
            // metadata: MPropertyDescription "Maximum camera distance. Higher means more zoom out possible"
            float m_flMaxCameraDistance; // 0x6c            
            // metadata: MPropertyDescription "The camera distance at which we reveal rooms / train car interior."
            float m_flInnerCameraDistanceThreshold; // 0x70            
            // metadata: MPropertyDescription "Minimum camera center position."
            Vector2D m_vMinCameraBounds; // 0x74            
            // metadata: MPropertyDescription "Minimum camera center position."
            Vector2D m_vMaxCameraBounds; // 0x7c            
            uint8_t _pad0084[0x4]; // 0x84
            CUtlString m_sMapVisualsXmlPath; // 0x88            
            // metadata: MPropertyDescription "Optional release schedule, for if we want certain content to release at specific times."
            // m_vecReleaseSchedule has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::DOTAOverworldReleaseScheduledUnlock_t> m_vecReleaseSchedule;
            char m_vecReleaseSchedule[0x18]; // 0x90            
            // metadata: MPropertyDescription
            // m_vecStartNodeIds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::OverworldNodeID_t> m_vecStartNodeIds;
            char m_vecStartNodeIds[0x18]; // 0xa8            
            // metadata: MPropertyDescription
            source2sdk::client::OverworldNodeID_t m_unEndNodeID; // 0xc0            
            uint8_t _pad00c2[0x6]; // 0xc2
            // metadata: MPropertyDescription "Name/key of the default Visual Novel associated with this map. Note that this can be overriden through DOTAOverworldReleaseScheduledUnlock_t"
            CUtlString m_sVisualNovelName; // 0xc8            
            // metadata: MPropertyDescription "Prefix to combine with tokent names to give their loc strings."
            CUtlString m_sTokenLocStringPrefix; // 0xd0            
            // metadata: MPropertyDescription "Act number loc string, e.g. Act I."
            CUtlString m_sActNumberLocString; // 0xd8            
            // metadata: MPropertyDescription "Act title loc string, e.g. The Eyrie."
            CUtlString m_sActTitleLocString; // 0xe0            
            // metadata: MPropertyDescription
            source2sdk::client::item_definition_index_t m_unPremiumItemDef; // 0xe8            
            // metadata: MPropertyDescription
            source2sdk::client::item_definition_index_t m_unFullCompletionItemDef; // 0xec            
            // metadata: MPropertyDescription "ID of the scrap token rewarded for playing matches."
            source2sdk::client::OverworldTokenID_t m_unScrapTokenID; // 0xf0            
            uint8_t _pad00f1[0x3]; // 0xf1
            // metadata: MPropertyDescription "How long a fortune lasts for an account in seconds"
            std::uint32_t m_unFortuneDuration; // 0xf4            
            // metadata: MPropertyDescription "This token can be used to unlock any node with non-special token costs."
            source2sdk::client::OverworldTokenID_t m_unPathUnlockerTokenID; // 0xf8            
            uint8_t _pad00f9[0x3]; // 0xf9
            // metadata: MPropertyDescription "How many times a fortune has to be received before the permanent reward can be unlocked"
            std::int32_t m_unFortuneCountForPermanentReward; // 0xfc            
            // metadata: MPropertyDescription "How many times each fortune can be revealed until all fortunes have been revealed this amount"
            std::int32_t m_unTimesFortuneCanBeSeenBeforeRepeats; // 0x100            
            uint8_t _pad0104[0x4]; // 0x104
            // metadata: MPropertyDescription "What weight a fortune should have when being randomly selected based on how many times they can still be seen. The amount unseen is used as the index."
            // m_vecFortuneWeightForUnseenAmount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecFortuneWeightForUnseenAmount;
            char m_vecFortuneWeightForUnseenAmount[0x18]; // 0x108            
            // metadata: MPropertyDescription "Hard limit on per-token quantities. It's impossible to have more than this number of tokens."
            std::int32_t m_nMaxTokenCap; // 0x120            
            uint8_t _pad0124[0x4]; // 0x124
            // m_vecEventActionTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAEventActionTrigger> m_vecEventActionTriggers;
            char m_vecEventActionTriggers[0x18]; // 0x128            
            // m_vecEventActionGrantAndClaimPairTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAEventActionGrantAndClaimPairTrigger> m_vecEventActionGrantAndClaimPairTriggers;
            char m_vecEventActionGrantAndClaimPairTriggers[0x18]; // 0x140            
            // m_vecPathColorRules has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldPathColorRule> m_vecPathColorRules;
            char m_vecPathColorRules[0x18]; // 0x158            
            CUtlString m_strNarrationVisualNovel; // 0x170            
            // m_mapNarrationDialogues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,CUtlString> m_mapNarrationDialogues;
            char m_mapNarrationDialogues[0x28]; // 0x178            
            uint8_t _pad01a0[0x1d0]; // 0x1a0
            source2sdk::client::CDOTAOverworldTheme m_Theme; // 0x370            
            // m_vecTokenTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldToken*> m_vecTokenTypes;
            char m_vecTokenTypes[0x18]; // 0x3a8            
            uint8_t _pad03c0[0x18]; // 0x3c0
            // m_vecTarotCards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldTarotCard*> m_vecTarotCards;
            char m_vecTarotCards[0x18]; // 0x3d8            
            // m_vecFortuneTellerRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldFortuneTellerReward*> m_vecFortuneTellerRewards;
            char m_vecFortuneTellerRewards[0x18]; // 0x3f0            
            // m_vecFortuneForcedReveals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldFortuneForcedReveal*> m_vecFortuneForcedReveals;
            char m_vecFortuneForcedReveals[0x18]; // 0x408            
            // m_vecFortuneTellerFixedReward has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldFortuneTellerFixedReward*> m_vecFortuneTellerFixedReward;
            char m_vecFortuneTellerFixedReward[0x18]; // 0x420            
            // m_vecFortuneTellerStoryNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldFortuneTellerStoryNode*> m_vecFortuneTellerStoryNodes;
            char m_vecFortuneTellerStoryNodes[0x18]; // 0x438            
            uint8_t _pad0450[0x28]; // 0x450
            // m_vecHeroRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldHeroReward*> m_vecHeroRewards;
            char m_vecHeroRewards[0x18]; // 0x478            
            // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldNode*> m_vecNodes;
            char m_vecNodes[0x18]; // 0x490            
            // m_vecPaths has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldPath*> m_vecPaths;
            char m_vecPaths[0x18]; // 0x4a8            
            // m_vecRooms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldRoom*> m_vecRooms;
            char m_vecRooms[0x18]; // 0x4c0            
            // m_vecEncounters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldEncounter*> m_vecEncounters;
            char m_vecEncounters[0x18]; // 0x4d8            
            // m_vecHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldHero*> m_vecHeroes;
            char m_vecHeroes[0x18]; // 0x4f0            
            // m_vecCharacters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldCharacter*> m_vecCharacters;
            char m_vecCharacters[0x18]; // 0x508            
            // m_vecClickables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldClickable*> m_vecClickables;
            char m_vecClickables[0x18]; // 0x520            
            uint8_t _pad0538[0xc8]; // 0x538
            // m_vecRoomGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldRoomGroup*> m_vecRoomGroups;
            char m_vecRoomGroups[0x18]; // 0x600            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, generic_data_type) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unID) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sKey) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_eAssociatedEvent) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_eProgressionType) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unOverworldVersion) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sTokenTraderEncounterName) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sNodeUnlockEventAction) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vGridOffset) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unGridSize) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unNodeGridSize) == 0x44);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unMapWidth) == 0x48);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unMapHeight) == 0x4c);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecCameraDistances) == 0x50);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_flMinCameraDistance) == 0x68);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_flMaxCameraDistance) == 0x6c);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_flInnerCameraDistanceThreshold) == 0x70);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vMinCameraBounds) == 0x74);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vMaxCameraBounds) == 0x7c);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sMapVisualsXmlPath) == 0x88);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecReleaseSchedule) == 0x90);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecStartNodeIds) == 0xa8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unEndNodeID) == 0xc0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sVisualNovelName) == 0xc8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sTokenLocStringPrefix) == 0xd0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sActNumberLocString) == 0xd8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sActTitleLocString) == 0xe0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unPremiumItemDef) == 0xe8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unFullCompletionItemDef) == 0xec);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unScrapTokenID) == 0xf0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unFortuneDuration) == 0xf4);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unPathUnlockerTokenID) == 0xf8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unFortuneCountForPermanentReward) == 0xfc);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unTimesFortuneCanBeSeenBeforeRepeats) == 0x100);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecFortuneWeightForUnseenAmount) == 0x108);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_nMaxTokenCap) == 0x120);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecEventActionTriggers) == 0x128);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecEventActionGrantAndClaimPairTriggers) == 0x140);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecPathColorRules) == 0x158);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_strNarrationVisualNovel) == 0x170);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_mapNarrationDialogues) == 0x178);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_Theme) == 0x370);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecTokenTypes) == 0x3a8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecTarotCards) == 0x3d8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecFortuneTellerRewards) == 0x3f0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecFortuneForcedReveals) == 0x408);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecFortuneTellerFixedReward) == 0x420);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecFortuneTellerStoryNodes) == 0x438);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecHeroRewards) == 0x478);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecNodes) == 0x490);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecPaths) == 0x4a8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecRooms) == 0x4c0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecEncounters) == 0x4d8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecHeroes) == 0x4f0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecCharacters) == 0x508);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecClickables) == 0x520);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecRoomGroups) == 0x600);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldDefinition) == 0x618);
    };
};
