#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/IAnimationGraphInstance.hpp"
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/AnimationAlgorithm_t.hpp"
#include "source2sdk/client/CAnimGraphNetworkedVariables.hpp"
#include "source2sdk/client/CSkeletonAnimationController.hpp"
#include "source2sdk/client/ExternalAnimGraphHandle_t.hpp"
#include "source2sdk/client/ExternalAnimGraph_t.hpp"
#include "source2sdk/client/SequenceFinishNotifyState_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcefile/ResourceId_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimGraph;
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
        // Standard-layout class: false
        // Size: 0x1b38
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "AnimationAlgorithm_t m_nAnimationAlgorithm"
        // static metadata: MNetworkVarNames "CAnimGraphNetworkedVariables m_animGraphNetworkedVars"
        // static metadata: MNetworkVarNames "CHandle< CBaseAnimGraph > m_vecSecondarySkeletons"
        // static metadata: MNetworkVarNames "int m_nSecondarySkeletonMasterCount"
        // static metadata: MNetworkVarNames "HSequence m_hSequence"
        // static metadata: MNetworkVarNames "GameTime_t m_flSeqStartTime"
        // static metadata: MNetworkVarNames "float m_flSeqFixedCycle"
        // static metadata: MNetworkVarNames "AnimLoopMode_t m_nAnimLoopMode"
        // static metadata: MNetworkVarNames "CNetworkedQuantizedFloat m_flPlaybackRate"
        // static metadata: MNetworkVarNames "HNmGraphDefinitionStrong m_hGraphDefinitionAG2"
        // static metadata: MNetworkVarNames "uint8 m_serializedPoseRecipeAG2"
        // static metadata: MNetworkVarNames "int m_nSerializePoseRecipeSizeAG2"
        // static metadata: MNetworkVarNames "int m_nSerializePoseRecipeVersionAG2"
        // static metadata: MNetworkVarNames "int m_nServerGraphInstanceIteration"
        // static metadata: MNetworkVarNames "int m_nServerSerializationContextIteration"
        // static metadata: MNetworkVarNames "ResourceId_t m_primaryGraphId"
        // static metadata: MNetworkVarNames "ResourceId_t m_vecExternalGraphIds"
        // static metadata: MNetworkVarNames "ResourceId_t m_vecExternalClipIds"
        #pragma pack(push, 1)
        class CBaseAnimGraphController : public source2sdk::client::CSkeletonAnimationController
        {
        public:
            uint8_t _pad0010[0x8]; // 0x10
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphDefinitionOrModeChanged"
            source2sdk::client::AnimationAlgorithm_t m_nAnimationAlgorithm; // 0x18            
            uint8_t _pad0019[0x7]; // 0x19
            // metadata: MNetworkEnable
            source2sdk::client::CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x20            
            // metadata: MSaveOpsForField
            // m_pAnimGraphInstance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::IAnimationGraphInstance> m_pAnimGraphInstance;
            char m_pAnimGraphInstance[0x8]; // 0x14b0            
            uint8_t _pad14b8[0x58]; // 0x14b8
            source2sdk::client::ExternalAnimGraphHandle_t m_nNextExternalGraphHandle; // 0x1510            
            uint8_t _pad1514[0x4]; // 0x1514
            // m_vecSecondarySkeletonNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_vecSecondarySkeletonNames;
            char m_vecSecondarySkeletonNames[0x18]; // 0x1518            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSecondarySkeletonsChanged"
            // m_vecSecondarySkeletons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::CBaseAnimGraph>> m_vecSecondarySkeletons;
            char m_vecSecondarySkeletons[0x18]; // 0x1530            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphDefinitionOrModeChanged"
            std::int32_t m_nSecondarySkeletonMasterCount; // 0x1548            
            uint8_t _pad154c[0x4]; // 0x154c
            float m_flSoundSyncTime; // 0x1550            
            std::uint32_t m_nActiveIKChainMask; // 0x1554            
            uint8_t _pad1558[0x50]; // 0x1558
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkChangeCallback "OnNetworkedSequenceChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::animationsystem::HSequence m_hSequence; // 0x15a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0x15ac            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            float m_flSeqFixedCycle; // 0x15b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::client::AnimLoopMode_t m_nAnimLoopMode; // 0x15b4            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "-4,000000"
            // metadata: MNetworkMaxValue "12,000000"
            // metadata: MNetworkEncodeFlags "5"
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            CNetworkedQuantizedFloat m_flPlaybackRate; // 0x15b8            
            uint8_t _pad15c0[0x4]; // 0x15c0
            source2sdk::client::SequenceFinishNotifyState_t m_nNotifyState; // 0x15c4            
            bool m_bNetworkedAnimationInputsChanged; // 0x15c5            
            bool m_bNetworkedSequenceChanged; // 0x15c6            
            bool m_bLastUpdateSkipped; // 0x15c7            
            bool m_bSequenceFinished; // 0x15c8            
            uint8_t _pad15c9[0x3]; // 0x15c9
            source2sdk::entity2::GameTick_t m_nPrevAnimUpdateTick; // 0x15cc            
            uint8_t _pad15d0[0x298]; // 0x15d0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphDefinitionOrModeChanged"
            // m_hGraphDefinitionAG2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hGraphDefinitionAG2;
            char m_hGraphDefinitionAG2[0x8]; // 0x1868            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_serializedPoseRecipeAG2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_serializedPoseRecipeAG2;
            char m_serializedPoseRecipeAG2[0x18]; // 0x1870            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nSerializePoseRecipeSizeAG2; // 0x1888            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nSerializePoseRecipeVersionAG2; // 0x188c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            std::int32_t m_nServerGraphInstanceIteration; // 0x1890            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            std::int32_t m_nServerSerializationContextIteration; // 0x1894            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            source2sdk::resourcefile::ResourceId_t m_primaryGraphId; // 0x1898            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            // m_vecExternalGraphIds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::resourcefile::ResourceId_t> m_vecExternalGraphIds;
            char m_vecExternalGraphIds[0x18]; // 0x18a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            // m_vecExternalClipIds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::resourcefile::ResourceId_t> m_vecExternalClipIds;
            char m_vecExternalClipIds[0x18]; // 0x18b8            
            CGlobalSymbol m_sAnimGraph2Identifier; // 0x18d0            
            uint8_t _pad18d8[0x220]; // 0x18d8
            // metadata: MSaveOpsForField
            // m_vecExternalGraphs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ExternalAnimGraph_t> m_vecExternalGraphs;
            char m_vecExternalGraphs[0x18]; // 0x1af8            
            uint8_t _pad1b10[0x21]; // 0x1b10
            source2sdk::client::AnimationAlgorithm_t m_nPrevAnimationAlgorithm; // 0x1b31            
            uint8_t _pad1b32[0x6];
            
            // Datamap fields:
            // void m_pGraphInstanceAG2; // 0x18e0
            // float m_flCachedSequenceCycleRate; // 0x15c0
            // void m_iv_AnimOpHistory; // 0x1558
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraphController) == 0x1b38);
    };
};
