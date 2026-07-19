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
        // Size: 0xdf8
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_RopeKeyframe : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0a88[0x8]; // 0xa88
            // metadata: MNotSaved
            // m_LinksTouchingSomething has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVec<10> m_LinksTouchingSomething;
            char m_LinksTouchingSomething[0x4]; // 0xa90            
            // metadata: MNotSaved
            std::int32_t m_nLinksTouchingSomething; // 0xa94            
            // metadata: MNotSaved
            bool m_bApplyWind; // 0xa98            
            uint8_t _pad0a99[0x3]; // 0xa99
            // metadata: MNotSaved
            std::int32_t m_fPrevLockedPoints; // 0xa9c            
            // metadata: MNotSaved
            std::int32_t m_iForcePointMoveCounter; // 0xaa0            
            // metadata: MNotSaved
            bool m_bPrevEndPointPos[2]; // 0xaa4            
            uint8_t _pad0aa6[0x2]; // 0xaa6
            // metadata: MNotSaved
            VectorWS m_vPrevEndPointPos[2]; // 0xaa8            
            // metadata: MNotSaved
            float m_flCurScroll; // 0xac0            
            // metadata: MNotSaved
            float m_flScrollSpeed; // 0xac4            
            // metadata: MNotSaved
            std::uint16_t m_RopeFlags; // 0xac8            
            uint8_t _pad0aca[0x6]; // 0xaca
            // metadata: MNotSaved
            // m_iRopeMaterialModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex;
            char m_iRopeMaterialModelIndex[0x8]; // 0xad0            
            uint8_t _pad0ad8[0x270]; // 0xad8
            // metadata: MNotSaved
            std::uint8_t m_nSegments; // 0xd48            
            uint8_t _pad0d49[0x3]; // 0xd49
            // metadata: MNotSaved
            // m_hStartPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hStartPoint;
            char m_hStartPoint[0x4]; // 0xd4c            
            // metadata: MNotSaved
            // m_hEndPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEndPoint;
            char m_hEndPoint[0x4]; // 0xd50            
            // metadata: MNotSaved
            source2sdk::modellib::AttachmentHandle_t m_iStartAttachment; // 0xd54            
            // metadata: MNotSaved
            source2sdk::modellib::AttachmentHandle_t m_iEndAttachment; // 0xd55            
            // metadata: MNotSaved
            std::uint8_t m_Subdiv; // 0xd56            
            uint8_t _pad0d57[0x1]; // 0xd57
            // metadata: MNotSaved
            std::int16_t m_RopeLength; // 0xd58            
            // metadata: MNotSaved
            std::int16_t m_Slack; // 0xd5a            
            // metadata: MNotSaved
            float m_TextureScale; // 0xd5c            
            // metadata: MNotSaved
            std::uint8_t m_fLockedPoints; // 0xd60            
            // metadata: MNotSaved
            std::uint8_t m_nChangeCount; // 0xd61            
            uint8_t _pad0d62[0x2]; // 0xd62
            // metadata: MNotSaved
            float m_Width; // 0xd64            
            // metadata: MNotSaved
            source2sdk::client::C_RopeKeyframe_CPhysicsDelegate m_PhysicsDelegate; // 0xd68            
            // metadata: MNotSaved
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x8]; // 0xd78            
            // metadata: MNotSaved
            std::int32_t m_TextureHeight; // 0xd80            
            // metadata: MNotSaved
            Vector m_vecImpulse; // 0xd84            
            // metadata: MNotSaved
            Vector m_vecPreviousImpulse; // 0xd90            
            // metadata: MNotSaved
            float m_flCurrentGustTimer; // 0xd9c            
            // metadata: MNotSaved
            float m_flCurrentGustLifetime; // 0xda0            
            // metadata: MNotSaved
            float m_flTimeToNextGust; // 0xda4            
            // metadata: MNotSaved
            Vector m_vWindDir; // 0xda8            
            // metadata: MNotSaved
            Vector m_vColorMod; // 0xdb4            
            // metadata: MNotSaved
            VectorWS m_vCachedEndPointAttachmentPos[2]; // 0xdc0            
            // metadata: MNotSaved
            QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xdd8            
            // metadata: MNotSaved
            bool m_bConstrainBetweenEndpoints; // 0xdf0            
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
            uint8_t _pad0df2[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RopeKeyframe because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RopeKeyframe) == 0xdf8);
    };
};
