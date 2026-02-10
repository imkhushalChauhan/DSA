const { SessionsClient } = require('@google-cloud/dialogflow-cx');

async function runTest() {
  const client = new SessionsClient();

  const projectId = "PROJECT_ID";
  const location = "global"; // or your region
  const agentId = "AGENT_ID";
  const sessionId = "test-session-123";

  const sessionPath = `projects/${projectId}/locations/${location}/agents/${agentId}/sessions/${sessionId}`;

  const request = {
    session: sessionPath,
    queryInput: {
      text: { text: "hello" },
      languageCode: "en",
    }
  };

  const [response] = await client.detectIntent(request);

  console.log("Bot response:");
  response.queryResult.responseMessages.forEach(msg => {
    if (msg.text) console.log(msg.text.text[0]);
  });
}

runTest();
