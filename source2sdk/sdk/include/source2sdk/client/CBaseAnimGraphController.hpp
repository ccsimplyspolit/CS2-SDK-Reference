#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/AnimGraph2SerializedPoseRecipeSlot_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6a0
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
            // C_NetworkUtlVectorBase<CGlobalSymbol> m_vecSecondarySkeletonSlotIDs;
            char m_vecSecondarySkeletonSlotIDs[0x18]; // 0x20            
            // m_vecSecondarySkeletons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::CBaseAnimGraph>> m_vecSecondarySkeletons;
            char m_vecSecondarySkeletons[0x18]; // 0x38            
            std::int32_t m_nSecondarySkeletonMasterCount; // 0x50            
            uint8_t _pad0054[0x4]; // 0x54
            float m_flSoundSyncTime; // 0x58            
            std::uint32_t m_nActiveIKChainMask; // 0x5c            
            uint8_t _pad0060[0x50]; // 0x60
            source2sdk::animationsystem::HSequence m_hSequence; // 0xb0            
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0xb4            
            float m_flSeqFixedCycle; // 0xb8            
            source2sdk::client::AnimLoopMode_t m_nAnimLoopMode; // 0xbc            
            CNetworkedQuantizedFloat m_flPlaybackRate; // 0xc0            
            uint8_t _pad00c8[0x4]; // 0xc8
            source2sdk::client::SequenceFinishNotifyState_t m_nNotifyState; // 0xcc            
            bool m_bNetworkedAnimationInputsChanged; // 0xcd            
            bool m_bNetworkedSequenceChanged; // 0xce            
            bool m_bLastUpdateSkipped; // 0xcf            
            bool m_bSequenceFinished; // 0xd0            
            uint8_t _pad00d1[0x3]; // 0xd1
            source2sdk::entity2::GameTick_t m_nPrevAnimUpdateTick; // 0xd4            
            uint8_t _pad00d8[0x298]; // 0xd8
            // m_hGraphDefinitionAG2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hGraphDefinitionAG2;
            char m_hGraphDefinitionAG2[0x8]; // 0x370            
            // metadata: MNotSaved
            // m_SerializePoseRecipeAG2Slots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::AnimGraph2SerializedPoseRecipeSlot_t> m_SerializePoseRecipeAG2Slots;
            char m_SerializePoseRecipeAG2Slots[0x68]; // 0x378            
            // metadata: MNotSaved
            // m_SerializePoseRecipeAG2Dynamic has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_SerializePoseRecipeAG2Dynamic;
            char m_SerializePoseRecipeAG2Dynamic[0x18]; // 0x3e0            
            // metadata: MNotSaved
            std::uint32_t m_nSerializePoseRecipeAG2ActiveSlot; // 0x3f8            
            // metadata: MNotSaved
            std::int32_t m_nSerializePoseRecipeVersionAG2; // 0x3fc            
            std::int32_t m_nServerGraphInstanceIteration; // 0x400            
            std::int32_t m_nServerSerializationContextIteration; // 0x404            
            source2sdk::resourcefile::ResourceId_t m_primaryGraphId; // 0x408            
            // m_vecExternalGraphIds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::resourcefile::ResourceId_t> m_vecExternalGraphIds;
            char m_vecExternalGraphIds[0x18]; // 0x410            
            // m_vecExternalClipIds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::resourcefile::ResourceId_t> m_vecExternalClipIds;
            char m_vecExternalClipIds[0x18]; // 0x428            
            CGlobalSymbol m_sAnimGraph2Identifier; // 0x440            
            source2sdk::client::CAnimGraph2InstancePtr m_pGraphInstanceAG2; // 0x448            
            uint8_t _pad0458[0x210]; // 0x458
            source2sdk::client::CExternalAnimGraphList m_vecExternalGraphs; // 0x668            
            uint8_t _pad0688[0x11]; // 0x688
            source2sdk::client::AnimationAlgorithm_t m_nPrevAnimationAlgorithm; // 0x699            
            uint8_t _pad069a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraphController) == 0x6a0);
    };
};
