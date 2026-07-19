#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/C_RopeKeyframe_CPhysicsDelegate.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
        // Size: 0x1320
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_RopeKeyframe : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0fb0[0x8]; // 0xfb0
            // metadata: MNotSaved
            // m_LinksTouchingSomething has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVec<10> m_LinksTouchingSomething;
            char m_LinksTouchingSomething[0x4]; // 0xfb8            
            // metadata: MNotSaved
            std::int32_t m_nLinksTouchingSomething; // 0xfbc            
            // metadata: MNotSaved
            bool m_bApplyWind; // 0xfc0            
            uint8_t _pad0fc1[0x3]; // 0xfc1
            // metadata: MNotSaved
            std::int32_t m_fPrevLockedPoints; // 0xfc4            
            // metadata: MNotSaved
            std::int32_t m_iForcePointMoveCounter; // 0xfc8            
            // metadata: MNotSaved
            bool m_bPrevEndPointPos[2]; // 0xfcc            
            uint8_t _pad0fce[0x2]; // 0xfce
            // metadata: MNotSaved
            VectorWS m_vPrevEndPointPos[2]; // 0xfd0            
            // metadata: MNotSaved
            float m_flCurScroll; // 0xfe8            
            // metadata: MNotSaved
            float m_flScrollSpeed; // 0xfec            
            // metadata: MNotSaved
            std::uint16_t m_RopeFlags; // 0xff0            
            uint8_t _pad0ff2[0x6]; // 0xff2
            // metadata: MNotSaved
            // m_iRopeMaterialModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex;
            char m_iRopeMaterialModelIndex[0x8]; // 0xff8            
            uint8_t _pad1000[0x270]; // 0x1000
            // metadata: MNotSaved
            std::uint8_t m_nSegments; // 0x1270            
            uint8_t _pad1271[0x3]; // 0x1271
            // metadata: MNotSaved
            // m_hStartPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hStartPoint;
            char m_hStartPoint[0x4]; // 0x1274            
            // metadata: MNotSaved
            // m_hEndPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEndPoint;
            char m_hEndPoint[0x4]; // 0x1278            
            // metadata: MNotSaved
            source2sdk::modellib::AttachmentHandle_t m_iStartAttachment; // 0x127c            
            // metadata: MNotSaved
            source2sdk::modellib::AttachmentHandle_t m_iEndAttachment; // 0x127d            
            // metadata: MNotSaved
            std::uint8_t m_Subdiv; // 0x127e            
            uint8_t _pad127f[0x1]; // 0x127f
            // metadata: MNotSaved
            std::int16_t m_RopeLength; // 0x1280            
            // metadata: MNotSaved
            std::int16_t m_Slack; // 0x1282            
            // metadata: MNotSaved
            float m_TextureScale; // 0x1284            
            // metadata: MNotSaved
            std::uint8_t m_fLockedPoints; // 0x1288            
            // metadata: MNotSaved
            std::uint8_t m_nChangeCount; // 0x1289            
            uint8_t _pad128a[0x2]; // 0x128a
            // metadata: MNotSaved
            float m_Width; // 0x128c            
            // metadata: MNotSaved
            source2sdk::client::C_RopeKeyframe_CPhysicsDelegate m_PhysicsDelegate; // 0x1290            
            // metadata: MNotSaved
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x8]; // 0x12a0            
            // metadata: MNotSaved
            std::int32_t m_TextureHeight; // 0x12a8            
            // metadata: MNotSaved
            Vector m_vecImpulse; // 0x12ac            
            // metadata: MNotSaved
            Vector m_vecPreviousImpulse; // 0x12b8            
            // metadata: MNotSaved
            float m_flCurrentGustTimer; // 0x12c4            
            // metadata: MNotSaved
            float m_flCurrentGustLifetime; // 0x12c8            
            // metadata: MNotSaved
            float m_flTimeToNextGust; // 0x12cc            
            // metadata: MNotSaved
            Vector m_vWindDir; // 0x12d0            
            // metadata: MNotSaved
            Vector m_vColorMod; // 0x12dc            
            // metadata: MNotSaved
            VectorWS m_vCachedEndPointAttachmentPos[2]; // 0x12e8            
            // metadata: MNotSaved
            QAngle m_vCachedEndPointAttachmentAngle[2]; // 0x1300            
            // metadata: MNotSaved
            bool m_bConstrainBetweenEndpoints; // 0x1318            
            // start of bitfield block
            // metadata: MNotSaved
            uint8_t m_bEndPointAttachmentPositionsDirty: 1;
            // metadata: MNotSaved
            uint8_t m_bEndPointAttachmentAnglesDirty: 1;
            // metadata: MNotSaved
            uint8_t m_bNewDataThisFrame: 1;
            // metadata: MNotSaved
            uint8_t m_bPhysicsInitted: 1;
            // end of bitfield block// 4 bits
            uint8_t _pad131a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RopeKeyframe because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RopeKeyframe) == 0x1320);
    };
};
