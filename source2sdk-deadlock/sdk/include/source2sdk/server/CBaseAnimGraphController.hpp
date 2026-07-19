#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/IAnimationGraphInstance.hpp"
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/AnimationAlgorithm_t.hpp"
#include "source2sdk/client/CSkeletonAnimationController.hpp"
#include "source2sdk/client/ExternalAnimGraphHandle_t.hpp"
#include "source2sdk/client/ExternalAnimGraph_t.hpp"
#include "source2sdk/client/SequenceFinishNotifyState_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcefile/ResourceId_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
#include "source2sdk/server/CAnimGraphNetworkedVariables.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseAnimGraph;
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
        // Size: 0x858
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
            source2sdk::server::CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x20            
            // metadata: MSaveOpsForField
            // m_pAnimGraphInstance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::IAnimationGraphInstance> m_pAnimGraphInstance;
            char m_pAnimGraphInstance[0x8]; // 0x228            
            uint8_t _pad0230[0x58]; // 0x230
            source2sdk::client::ExternalAnimGraphHandle_t m_nNextExternalGraphHandle; // 0x288            
            uint8_t _pad028c[0x4]; // 0x28c
            // m_vecSecondarySkeletonNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_vecSecondarySkeletonNames;
            char m_vecSecondarySkeletonNames[0x18]; // 0x290            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSecondarySkeletonsChanged"
            // m_vecSecondarySkeletons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseAnimGraph>> m_vecSecondarySkeletons;
            char m_vecSecondarySkeletons[0x18]; // 0x2a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphDefinitionOrModeChanged"
            std::int32_t m_nSecondarySkeletonMasterCount; // 0x2c0            
            uint8_t _pad02c4[0x4]; // 0x2c4
            float m_flSoundSyncTime; // 0x2c8            
            std::uint32_t m_nActiveIKChainMask; // 0x2cc            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkChangeCallback "OnNetworkedSequenceChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::animationsystem::HSequence m_hSequence; // 0x2d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0x2d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            float m_flSeqFixedCycle; // 0x2d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::client::AnimLoopMode_t m_nAnimLoopMode; // 0x2dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "-4,000000"
            // metadata: MNetworkMaxValue "12,000000"
            // metadata: MNetworkEncodeFlags "5"
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            CNetworkedQuantizedFloat m_flPlaybackRate; // 0x2e0            
            uint8_t _pad02e8[0x4]; // 0x2e8
            source2sdk::client::SequenceFinishNotifyState_t m_nNotifyState; // 0x2ec            
            bool m_bNetworkedAnimationInputsChanged; // 0x2ed            
            bool m_bNetworkedSequenceChanged; // 0x2ee            
            bool m_bLastUpdateSkipped; // 0x2ef            
            bool m_bSequenceFinished; // 0x2f0            
            uint8_t _pad02f1[0x3]; // 0x2f1
            source2sdk::entity2::GameTick_t m_nPrevAnimUpdateTick; // 0x2f4            
            uint8_t _pad02f8[0x298]; // 0x2f8
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphDefinitionOrModeChanged"
            // m_hGraphDefinitionAG2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hGraphDefinitionAG2;
            char m_hGraphDefinitionAG2[0x8]; // 0x590            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_serializedPoseRecipeAG2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_serializedPoseRecipeAG2;
            char m_serializedPoseRecipeAG2[0x18]; // 0x598            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nSerializePoseRecipeSizeAG2; // 0x5b0            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nSerializePoseRecipeVersionAG2; // 0x5b4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            std::int32_t m_nServerGraphInstanceIteration; // 0x5b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            std::int32_t m_nServerSerializationContextIteration; // 0x5bc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            source2sdk::resourcefile::ResourceId_t m_primaryGraphId; // 0x5c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            // m_vecExternalGraphIds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::resourcefile::ResourceId_t> m_vecExternalGraphIds;
            char m_vecExternalGraphIds[0x18]; // 0x5c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphSerializationContextInvalidated"
            // m_vecExternalClipIds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::resourcefile::ResourceId_t> m_vecExternalClipIds;
            char m_vecExternalClipIds[0x18]; // 0x5e0            
            CGlobalSymbol m_sAnimGraph2Identifier; // 0x5f8            
            uint8_t _pad0600[0x220]; // 0x600
            // metadata: MSaveOpsForField
            // m_vecExternalGraphs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ExternalAnimGraph_t> m_vecExternalGraphs;
            char m_vecExternalGraphs[0x18]; // 0x820            
            uint8_t _pad0838[0x20];
            
            // Datamap fields:
            // void m_pGraphInstanceAG2; // 0x608
            // float m_flCachedSequenceCycleRate; // 0x2e8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimGraphController) == 0x858);
    };
};
