#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerManager.hpp"
#include "source2sdk/client/CAnimGraphControllerPtr.hpp"
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
namespace source2sdk
{
    namespace vphysics2
    {
        struct IPhysicsRagdollControl;
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
        // Size: 0x1180
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::client::C_BaseModelEntity
        {
        public:
            source2sdk::client::CAnimGraphControllerManager m_graphControllerManager; // 0xfb0            
            source2sdk::client::CAnimGraphControllerPtr m_pMainGraphController; // 0x1048            
            bool m_bInitiallyPopulateInterpHistory; // 0x1050            
            uint8_t _pad1051[0x1]; // 0x1051
            bool m_bSuppressAnimEventSounds; // 0x1052            
            uint8_t _pad1053[0x5]; // 0x1053
            // m_OnLayerCycleUpdated has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnLayerCycleUpdated;
            char m_OnLayerCycleUpdated[0x20]; // 0x1058            
            source2sdk::entity2::CEntityIOOutput m_OnExternalChoreoGraphChanged; // 0x1078            
            uint8_t _pad1090[0x8]; // 0x1090
            bool m_bAnimGraphUpdateEnabled; // 0x1098            
            // metadata: MNotSaved
            bool m_bAnimationUpdateScheduled; // 0x1099            
            uint8_t _pad109a[0x2]; // 0x109a
            // metadata: MNotSaved
            Vector m_vecForce; // 0x109c            
            // metadata: MNotSaved
            std::int32_t m_nForceBone; // 0x10a8            
            uint8_t _pad10ac[0x4]; // 0x10ac
            // metadata: MNotSaved
            source2sdk::client::CBaseAnimGraph* m_pClientsideRagdoll; // 0x10b0            
            // metadata: MNotSaved
            bool m_bBuiltRagdoll; // 0x10b8            
            uint8_t _pad10b9[0xf]; // 0x10b9
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysicsRagdollControl* m_pRagdollControl; // 0x10c8            
            source2sdk::client::PhysicsRagdollPose_t m_RagdollPose; // 0x10d0            
            bool m_bRagdollEnabled; // 0x1118            
            // metadata: MNotSaved
            bool m_bRagdollClientSide; // 0x1119            
            uint8_t _pad111a[0xe]; // 0x111a
            // metadata: MNotSaved
            bool m_bHasAnimatedMaterialAttributes; // 0x1128            
            uint8_t _pad1129[0x57];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraph) == 0x1180);
    };
};
