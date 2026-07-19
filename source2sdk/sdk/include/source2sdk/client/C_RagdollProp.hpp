#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x1208
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_RagdollProp : public source2sdk::client::CBaseAnimGraph
        {
        public:
            // metadata: MNotSaved
            // m_ragEnabled has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<bool> m_ragEnabled;
            char m_ragEnabled[0x18]; // 0x1180            
            // metadata: MNotSaved
            // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<Vector> m_ragPos;
            char m_ragPos[0x18]; // 0x1198            
            // metadata: MNotSaved
            // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<QAngle> m_ragAngles;
            char m_ragAngles[0x18]; // 0x11b0            
            // metadata: MNotSaved
            float m_flBlendWeight; // 0x11c8            
            // metadata: MNotSaved
            // m_hRagdollSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRagdollSource;
            char m_hRagdollSource[0x4]; // 0x11cc            
            // metadata: MNotSaved
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0x11d0            
            uint8_t _pad11d1[0x3]; // 0x11d1
            // metadata: MNotSaved
            float m_flBlendWeightCurrent; // 0x11d4            
            // metadata: MNotSaved
            // m_parentPhysicsBoneIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_parentPhysicsBoneIndices;
            char m_parentPhysicsBoneIndices[0x18]; // 0x11d8            
            // metadata: MNotSaved
            // m_worldSpaceBoneComputationOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_worldSpaceBoneComputationOrder;
            char m_worldSpaceBoneComputationOrder[0x18]; // 0x11f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RagdollProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RagdollProp) == 0x1208);
    };
};
