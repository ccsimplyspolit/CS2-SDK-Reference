#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/AnimationAlgorithm_t.hpp"
#include "source2sdk/client/CAnimGraph2InstancePtr.hpp"
#include "source2sdk/client/CExternalAnimGraphList.hpp"
#include "source2sdk/client/CSkeletonAnimationController.hpp"
#include "source2sdk/client/ExternalAnimGraphHandle_t.hpp"
#include "source2sdk/client/SequenceFinishNotifyState_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcefile/ResourceId_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
#include "source2sdk/server/AnimGraph2SerializedPoseRecipeSlot_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x650
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBaseAnimGraphController : public source2sdk::client::CSkeletonAnimationController
        {
        public:
            uint8_t _pad0010[0x8]; // 0x10
            source2sdk::client::AnimationAlgorithm_t m_nAnimationAlgorithm; // 0x18            
            uint8_t _pad0019[0x3]; // 0x19
            source2sdk::client::ExternalAnimGraphHandle_t m_nNextExternalGraphHandle; // 0x1c            
            // m_vecSecondarySkeletonSlotIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CGlobalSymbol> m_vecSecondarySkeletonSlotIDs;
            char m_vecSecondarySkeletonSlotIDs[0x18]; // 0x20            
            // m_vecSecondarySkeletons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseAnimGraph>> m_vecSecondarySkeletons;
            char m_vecSecondarySkeletons[0x18]; // 0x38            
            std::int32_t m_nSecondarySkeletonMasterCount; // 0x50            
            float m_flSoundSyncTime; // 0x54            
            std::uint32_t m_nActiveIKChainMask; // 0x58            
            source2sdk::animationsystem::HSequence m_hSequence; // 0x5c            
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0x60            
            float m_flSeqFixedCycle; // 0x64            
            source2sdk::client::AnimLoopMode_t m_nAnimLoopMode; // 0x68            
            CNetworkedQuantizedFloat m_flPlaybackRate; // 0x6c            
            uint8_t _pad0074[0x4]; // 0x74
            source2sdk::client::SequenceFinishNotifyState_t m_nNotifyState; // 0x78            
            bool m_bNetworkedAnimationInputsChanged; // 0x79            
            bool m_bNetworkedSequenceChanged; // 0x7a            
            bool m_bLastUpdateSkipped; // 0x7b            
            bool m_bSequenceFinished; // 0x7c            
            uint8_t _pad007d[0x3]; // 0x7d
            source2sdk::entity2::GameTick_t m_nPrevAnimUpdateTick; // 0x80            
            uint8_t _pad0084[0x29c]; // 0x84
            // m_hGraphDefinitionAG2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hGraphDefinitionAG2;
            char m_hGraphDefinitionAG2[0x8]; // 0x320            
            // metadata: MNotSaved
            // m_SerializePoseRecipeAG2Slots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::AnimGraph2SerializedPoseRecipeSlot_t> m_SerializePoseRecipeAG2Slots;
            char m_SerializePoseRecipeAG2Slots[0x68]; // 0x328            
            // metadata: MNotSaved
            // m_SerializePoseRecipeAG2Dynamic has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_SerializePoseRecipeAG2Dynamic;
            char m_SerializePoseRecipeAG2Dynamic[0x18]; // 0x390            
            // metadata: MNotSaved
            std::uint32_t m_nSerializePoseRecipeAG2ActiveSlot; // 0x3a8            
            // metadata: MNotSaved
            std::int32_t m_nSerializePoseRecipeVersionAG2; // 0x3ac            
            uint8_t _pad03b0[0x10]; // 0x3b0
            std::int32_t m_nServerGraphInstanceIteration; // 0x3c0            
            std::int32_t m_nServerSerializationContextIteration; // 0x3c4            
            source2sdk::resourcefile::ResourceId_t m_primaryGraphId; // 0x3c8            
            // m_vecExternalGraphIds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::resourcefile::ResourceId_t> m_vecExternalGraphIds;
            char m_vecExternalGraphIds[0x18]; // 0x3d0            
            // m_vecExternalClipIds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::resourcefile::ResourceId_t> m_vecExternalClipIds;
            char m_vecExternalClipIds[0x18]; // 0x3e8            
            CGlobalSymbol m_sAnimGraph2Identifier; // 0x400            
            source2sdk::client::CAnimGraph2InstancePtr m_pGraphInstanceAG2; // 0x408            
            uint8_t _pad0418[0x210]; // 0x418
            source2sdk::client::CExternalAnimGraphList m_vecExternalGraphs; // 0x628            
            uint8_t _pad0648[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimGraphController) == 0x650);
    };
};
